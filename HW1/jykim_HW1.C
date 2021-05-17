#define Nbin 1000
{
   printf("\n\nThis is an effort towards homework 1\n\n");

 
   float tMin = 0;
   float tMax = 20;
   float dt = (tMax-tMin)/Nbin;

//Declaration of Arrays   
   float x[Nbin];
   float v[Nbin];
   float t[Nbin];
   
//Set time
   t[0]=0;
   for(int i=0; i<Nbin; i++){
	   t[i] = t[i-1] + dt;
   }

//Set initial condition   
   x[0] = 0.9;
   v[0] = 0;
   x[1] = x[0] + v[0]*dt;

//Solve ODE  
   for(int i=1; i<Nbin-1; i++) {

     v[i] = v[i-1] + dt/(x[i]*x[i]*x[i]) - dt/(x[i]*x[i]);
     x[i+1] = x[i] + v[i]*dt ;

     std::cout << i  << " = " << x[i] << std::endl; 
   }

   TCanvas *c1 = new TCanvas("c1");
   c1->DrawFrame(0,0.85,20,1.15);
   TGraph gr(Nbin,t,x);
   gr.SetMarkerStyle(7);
   gr.SetMarkerSize(0.8);
   gr.SetMarkerColor(kRed);
   gr.Draw("CLP");
}
