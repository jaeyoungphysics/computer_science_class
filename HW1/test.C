#define Nbin 1000
{
   printf("\n\nThis is an effort towards homework 1\n\n");

   float tMin = 0;
   float tMax = 20;
   float dt = (tMax-tMin)/Nbin;

   //float dydx;

   float t[Nbin];
   t[0]=0;

   //Set time
   for(int i=0; i<Nbin; i++){
	   t[i] = t[i-1] + dt;
   }

   //Set initial condition
   //float x_0 = 0;
   //float v_0 = 1;
   
   float x[Nbin];
   float v[Nbin];
   //float a[Nbin];


   x[0] = 0;
   v[0] = 1;
   x[1] = v[0]*dt;
  
   //v[1] = v[0] + (1/(x[0]*x[0]*x[0]) - 1/(x[0]*x[0]))*dt;
   //x[2] = x[1] + v[1]*dt;	   
   // a[0] = 

   for(int i=1; i<Nbin-1; i++) {

     v[i] = v[i-1] - x[i]*dt;
     x[i+1] = x[i] + v[i]*dt;

     std::cout << i  << " = " << x[i] << std::endl; 
   }

   TCanvas *c1 = new TCanvas("c1");
   c1->DrawFrame(0, -1.5,20,1.15);
   TGraph gr(Nbin,t,x);
   gr.SetMarkerStyle(7);
   gr.SetMarkerSize(0.8);
   gr.SetMarkerColor(kRed);
   gr.Draw("CLP");
}
