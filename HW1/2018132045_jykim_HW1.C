#define Nbin 100000
{
//Inhomogeneous 2nd ODE
 
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

//Chi value
   //float chi = 0;

//Solve ODE  
   for(int i=1; i<Nbin-1; i++) {

    v[i] = v[i-1] + dt/(x[i]*x[i]*x[i]) - dt/(x[i]*x[i]);
    x[i+1] = x[i] + v[i]*dt ;
    std::cout << "x[" << i+1 << "] = " << x[i+1] << std::endl;
    //if(i!=Nbin-2){
    						
   }


   float x1[Nbin];
   float v1[Nbin];
   float t1[Nbin];
   float Deltax[1000];
   //for(int i=0; i<1000; i++){
     // t2[i] = t[i];
   //}

   float dt1 = 1000*dt;
   t1[0]=0;   
   for(int i=0; i<Nbin; i++){
	   t1[i] = t1[i-1] + dt1;
   }
   
//Set initial condition   
   x1[0] = 0.9;
   v1[0] = 0;
   x1[1] = x1[0] + v1[0]*dt1;

//Chi value
   float chi = 0;
   float chi_ndf = 0;

/*
//Solve ODE  
   for(int i=1; i<Nbin-1; i++) {

    v1[i] = v1[i-1] + dt1/(x1[i]*x1[i]*x1[i]) - dt1/(x1[i]*x1[i]);
    x1[i+1] = x1[i] + v1[i]*dt1 ;
    //std::cout << "x[" << i+1 << "] = " << x[i+1] << std::endl;
    //if(i!=Nbin-2){

   std::cout << "check" << std::endl;
   
    std::cout << "x1[" << i+1 << "] = " << x1[i+1] << std::endl;

    v[i] = v[i-1] + dt/(x[i]*x[i]*x[i]) - dt/(x[i]*x[i]);
    x[i+1] = x[i] + v[i]*dt ;


    chi += (x1[i+1]-x[i])*(x1[i+1]-x[i]); 						
    if(i!=Nbin-2){
		std::cout << "chi = " << chi << std::endl;
    }
	
    if(i!=Nbin-2){
		chi_ndf = chi/100;
        std::cout << "chi_ndf = " << chi_ndf << std::endl;
}
}
*/

//Canvas
   TCanvas *c1 = new TCanvas("c1");
   c1->DrawFrame(0,0.85,20,1.15);
   c1->SetGridx();
   c1->SetGridy();

//Plot   
   TGraph *gr = new TGraph(Nbin,t,x);
//   TGraph *gr1 = new TGraph(Nbin,t1,x1);
   gr->SetMarkerStyle(7);
   gr->SetMarkerSize(0.8);
   gr->SetMarkerColor(kRed);

//   gr1->SetMarkerStyle(7);
//   gr1->SetMarkerSize(0.8);
//   gr1->SetMarkerColor(kBlue);
   
   gr->Draw("P");
//   gr1->Draw("LP");
}
