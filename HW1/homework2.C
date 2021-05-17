#define Nbin 1000
{
   printf("\n\nThis is an effort towards homework 1\n\n");

   float tMin = 0;
   float tMax = 10;
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
   float term1[Nbin];
   float term2[Nbin];


   x[0] = 0.9;
   v[0] = 0;
   //x[1] = v[0]*dt;

   for(int i=0; i<Nbin-1; i++) {
     term1[i] = x[i]*x[i]*x[i];
     term2[i] = x[i]*x[i];

     v[i+1] = v[i] + (1/term1[i] - 1/term2[i])*dt ;
     x[i+1] = x[i] + v[i]*dt + (1/term1[i] - 1/term2[i])/2;

     std::cout << i  << " = " << x[i] << std::endl; 
   }

   TCanvas *c1 = new TCanvas("c1");
   c1->DrawFrame(0,0.85,2,1.15);
   TGraph gr(Nbin,t,x);
   gr.SetMarkerStyle(7);
   gr.SetMarkerSize(0.8);
   gr.SetMarkerColor(kRed);
   gr.Draw("CLP");
}
