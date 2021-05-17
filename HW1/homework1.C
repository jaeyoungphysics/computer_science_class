#define Nbin 10
{
   printf("\n\nThis is an effort towards homework 1\n\n");

   float x[Nbin];
   float y[Nbin];

   float x1 = 0;
   float x2 = 1;
   float Dx = (x2-x1)/Nbin;
   float dydx;

// dy/dx = x^3

   for(int i=0; i<Nbin; i++) x[i] = Dx*i + Dx/2;
   y[0] = 0;
   for(int i=1; i<Nbin; i++) {
     dydx = x[i]*x[i]*x[i];
     y[i] = y[i-1] + dydx*Dx;
   }

   TCanvas *c1 = new TCanvas("c1");
   c1->DrawFrame(0,0,1,0.3);
   TGraph gr(Nbin,x,y);
   gr.SetMarkerStyle(22);
   gr.SetMarkerSize(0.8);
   gr.SetMarkerColor(kRed);
   gr.Draw("P");
}
