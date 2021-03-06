{

  float xsec_mass[8];
  float xsec_pt[7];
  float xsec_dy[8];
  float xsec_y[9];
  float pop_mass[8];
  float pop_pt[7];
  float pop_dy[8];
  float pop_y[9];
  float xsec_mass_err[8];
  float xsec_pt_err[7];
  float xsec_dy_err[8];
  float xsec_y_err[9];

  float binfit_plus5_mass[8];
  float binfit_plus5_pt[7];
  float binfit_plus5_dy[8];
  float binfit_plus5_y[9];
  float massbins[]={6.2,7,9,11,14,18,25,30,60};
  float ptbins[]={0,7,12,16,20,25,50,80};
  float dybins[]={0,0.2,0.4,0.6,0.9,1.3,1.8,2.4,3.8};
  float ybins[]={0,0.2,0.4,0.6,0.8,1.0,1.2,1.4,1.6,1.8};
  //xsec_mass[0] = 47.3;        
  //xsec_mass[1] = 22.8;        
  //xsec_mass[2] = 10.5;        
  //xsec_mass[3] = 7.3;
  //xsec_mass[4] = 4.7;       
  //xsec_mass[5] = 2.7;       
  //xsec_mass[6] = 2.3;
  //xsec_mass[7] = 0.4;
  //xsec_mass_err[0] = 6.3;
  //xsec_mass_err[1] = 2.4;
  //xsec_mass_err[2] = 1.5;
  //xsec_mass_err[3] = 1.2;
  //xsec_mass_err[4] = 0.7;
  //xsec_mass_err[5] = 0.4;
  //xsec_mass_err[6] = 0.3;
  //xsec_mass_err[7] = 0.05;
  //xsec_pt[0] = 5.5;
  //xsec_pt[1] = 5.8;
  //xsec_pt[2] = 9.8;
  //xsec_pt[3] = 9.5;
  //xsec_pt[4] = 5.7;
  //xsec_pt[5] = 0.7;
  //xsec_pt[6] = 0.06;
  //xsec_pt_err[0] = 0.7;
  //xsec_pt_err[1] = 0.9;
  //xsec_pt_err[2] = 1.6;
  //xsec_pt_err[3] = 1.2;
  //xsec_pt_err[4] = 0.6;
  //xsec_pt_err[5] = 0.06;
  //xsec_pt_err[6] = 0.019;
  //xsec_dy[0] = 352.5;
  //xsec_dy[1] = 208.3;
  //xsec_dy[2] = 99.7;
  //xsec_dy[3] = 59.5;
  //xsec_dy[4] = 39.2;
  //xsec_dy[5] = 23.7;
  //xsec_dy[6] = 22.7;
  //xsec_dy[7] = 10.5;
  //xsec_dy_err[0] = 28.5;
  //xsec_dy_err[1] = 21.6;
  //xsec_dy_err[2] = 14.1;
  //xsec_dy_err[3] = 10.3;
  //xsec_dy_err[4] = 6.8;
  //xsec_dy_err[5] = 5.4;
  //xsec_dy_err[6] = 4.6;
  //xsec_dy_err[7] = 2.3;
  //std::cout<<"he3re"<<std::endl;
  //xsec_y[0] = 96.6;
  //xsec_y[1] = 110.2;
  //xsec_y[2] = 89.0;
  //xsec_y[3] = 101.5;
  //xsec_y[4] = 77.4;
  //xsec_y[5] = 95.5;
  //xsec_y[6] = 137.2;
  //xsec_y[7] = 167.9;
  //xsec_y[8] = 120.1;
  //xsec_y_err[0] = 14.9;
  //xsec_y_err[1] = 15.6;
  //xsec_y_err[2] = 12.4;
  //xsec_y_err[3] = 13.6;
  //xsec_y_err[4] = 10.9;
  //xsec_y_err[5] = 14.2;
  //xsec_y_err[6] = 17.4;
  //xsec_y_err[7] = 22.9;
  //xsec_y_err[8] = 22.7;
  xsec_mass[0] = 47.2788;        
  xsec_mass[1] = 22.81564;        
  xsec_mass[2] = 10.49511;        
  xsec_mass[3] = 7.27431;
  xsec_mass[4] = 4.66488;       
  xsec_mass[5] = 2.743509;       
  xsec_mass[6] = 2.314135;
  xsec_mass[7] = 0.4000324;
  xsec_mass_err[0] = 6.261246;
  xsec_mass_err[1] = 2.350703;
  xsec_mass_err[2] = 1.504959;
  xsec_mass_err[3] = 1.173809;
  xsec_mass_err[4] = 0.710334;
  xsec_mass_err[5] = 0.3749463;
  xsec_mass_err[6] = 0.3397347;
  xsec_mass_err[7] = 0.05333765;
  xsec_pt[0] = 5.493831;
  xsec_pt[1] = 5.797937;
  xsec_pt[2] = 9.849179;
  xsec_pt[3] = 9.486197;
  xsec_pt[4] = 5.733921;
  xsec_pt[5] = 0.673957;
  xsec_pt[6] = 0.063601;
  xsec_pt_err[0] = 0.690653;
  xsec_pt_err[1] = 0.901901;
  xsec_pt_err[2] = 1.584433;
  xsec_pt_err[3] = 1.185775;
  xsec_pt_err[4] = 0.605544;
  xsec_pt_err[5] = 0.063681;
  xsec_pt_err[6] = 0.018844;
  xsec_dy[0] = 352.541;
  xsec_dy[1] = 208.301;
  xsec_dy[2] = 99.7438;
  xsec_dy[3] = 59.5286;
  xsec_dy[4] = 39.1572;
  xsec_dy[5] = 23.6861;
  xsec_dy[6] = 22.6962;
  xsec_dy[7] = 15.7;
  xsec_dy_err[0] = 28.520;
  xsec_dy_err[1] = 21.647;
  xsec_dy_err[2] = 14.071;
  xsec_dy_err[3] = 10.268;
  xsec_dy_err[4] = 6.8245;
  xsec_dy_err[5] = 5.3551;
  xsec_dy_err[6] = 4.6300;
  xsec_dy_err[7] = 3.42;
  xsec_y[0] = 96.558;
  xsec_y[1] = 110.18;
  xsec_y[2] = 88.985;
  xsec_y[3] = 101.52;
  xsec_y[4] = 77.362;
  xsec_y[5] = 95.456;
  xsec_y[6] = 137.21;
  xsec_y[7] = 167.88;
  xsec_y[8] = 120.14;
  xsec_y_err[0] = 14.922;
  xsec_y_err[1] = 15.625;
  xsec_y_err[2] = 12.359;
  xsec_y_err[3] = 13.593;
  xsec_y_err[4] = 10.947;
  xsec_y_err[5] = 14.221;
  xsec_y_err[6] = 17.393;
  xsec_y_err[7] = 22.936;
  xsec_y_err[8] = 22.694;

  pop_mass[0] = 74;
  pop_mass[1] = 99;
  pop_mass[2] = 53;
  pop_mass[3] = 44;
  pop_mass[4] = 44;
  pop_mass[5] = 60;
  pop_mass[6] = 47;
  pop_mass[7] = 63;
  pop_pt[0] = 70;
  pop_pt[1] = 45;
  pop_pt[2] = 46;
  pop_pt[3] = 72;
  pop_pt[4] = 107;
  pop_pt[5] = 127;
  pop_pt[6] = 13.5;
  pop_dy[1] = 178;
  pop_dy[2] = 102;
  pop_dy[3] = 56;
  pop_dy[4] = 40;
  pop_dy[5] = 35;
  pop_dy[6] = 23;
  pop_dy[7] = 25;
  pop_dy[8] = 23;
  pop_y[0] = 44;
  pop_y[1] = 55;
  pop_y[2] = 54;
  pop_y[3] = 59;
  pop_y[4] = 53;
  pop_y[5] = 49;
  pop_y[6] = 71;
  pop_y[7] = 71;
  pop_y[8] = 36;
  binfit_plus5_mass[0] = 47.5663;
  binfit_plus5_mass[1] = 22.9648;
  binfit_plus5_mass[2] = 10.6007;
  binfit_plus5_mass[3] = 7.42979;
  binfit_plus5_mass[4] = 4.82073;
  binfit_plus5_mass[5] = 2.84802;
  binfit_plus5_mass[6] = 2.49626;
  binfit_plus5_mass[7] = 0.46535;
  binfit_plus5_pt[0] = 5.688387;
  binfit_plus5_pt[1] = 6.067759;
  binfit_plus5_pt[2] = 10.03167;
  binfit_plus5_pt[3] = 9.492516;
  binfit_plus5_pt[4] = 5.742431;
  binfit_plus5_pt[5] = 0.675526;
  binfit_plus5_pt[6] = 0.063601;
  binfit_plus5_dy[0] = 356.423;
  binfit_plus5_dy[1] = 211.167;
  binfit_plus5_dy[2] = 101.159;
  binfit_plus5_dy[3] = 60.6494;
  binfit_plus5_dy[4] = 40.1873;
  binfit_plus5_dy[5] = 24.4130;
  binfit_plus5_dy[6] = 22.4844;
  binfit_plus5_dy[7] = 17.7;
  binfit_plus5_y[0] = 103.799;
  binfit_plus5_y[1] = 115.673;
  binfit_plus5_y[2] = 92.0710;
  binfit_plus5_y[3] = 104.282;
  binfit_plus5_y[4] = 79.2291;
  binfit_plus5_y[5] = 96.7483;
  binfit_plus5_y[6] = 139.425;
  binfit_plus5_y[7] = 171.129;
  binfit_plus5_y[8] = 122.463;
  
  float tp_mass[8];
  float tp_pt[7];
  float tp_dy[8];
  float tp_y[9];
  tp_mass[0] = 0.226;
  tp_mass[1] = 0.195;
  tp_mass[2] = 0.185;
  tp_mass[3] = 0.195;
  tp_mass[4] = 0.228;
  tp_mass[5] = 0.250;
  tp_mass[6] = 0.187;
  tp_mass[7] = 0.160;
  tp_pt[0] = 0.243;
  tp_pt[1] = 0.227;
  tp_pt[2] = 0.263;
  tp_pt[3] = 0.262;
  tp_pt[4] = 0.200;
  tp_pt[5] = 0.145;
  tp_pt[6] = 0.074;
  tp_dy[0] = 0.202;
  tp_dy[1] = 0.198;
  tp_dy[2] = 0.219;
  tp_dy[3] = 0.186;
  tp_dy[4] = 0.174;
  tp_dy[5] = 0.158;
  tp_dy[6] = 0.256;
  tp_dy[7] = 0.253;
  tp_y[0] = 0.179;
  tp_y[1] = 0.177;
  tp_y[2] = 0.167;
  tp_y[3] = 0.159;
  tp_y[4] = 0.176;
  tp_y[5] = 0.205;
  tp_y[6] = 0.280;
  tp_y[7] = 0.273;
  tp_y[8] = 0.164;
  float PerBinFixed = 0.01;
  float Bkg2P = 0.022;
  float SigCB = 0.01;
  float JAcc = 0.019;
  float unc_mass[8]; 
  float unc_mass2[8]; 
  float unc_pt[7]; 
  float unc_pt2[7]; 
  float unc_dy[8]; 
  float unc_y[9]; 
  float tot_stat_mass;
  float tot_syst_mass;
  float tot_syst_mass2;
  float tot_stat_pt;
  float tot_syst_pt;
  float tot_syst_pt2;
  float tot_stat_dy;
  float tot_syst_dy;
  float tot_stat_y;
  float tot_syst_y;
  float tot_mass=0;
  float tot_pt;
  float tot_dy;
  float tot_y;
  float tot_mass_n=0;
  float tot_pt_n;
  float tot_dy_n;
  float tot_y_n;
  float tot_tp_mass=0;
  float tot_tp_pt;
  float tot_tp_dy;
  float tot_tp_y;
  float tot_bf_mass=0;
  float tot_bf_pt;
  float tot_bf_dy;
  float tot_bf_y;
  

  std::cout<<"here"<<std::endl;
  for (int i=0; i<8;++i){
    unc_mass[i] = sqrt(pow(binfit_plus5_mass[i]-xsec_mass[i],2)+pow(PerBinFixed*xsec_mass[i],2)+pow(Bkg2P*xsec_mass[i],2)+pow(SigCB*xsec_mass[i],2)+pow(JAcc*xsec_mass[i],2)+pow(0.5*tp_mass[i]*xsec_mass[i],2));
    std::cout<<"Mass Bin: "<<i+1<<" Cross Section systematic: "<<xsec_mass[i]<<" +/- "<<xsec_mass_err[i]<<" +/- "<<unc_mass[i]<<" which is "<<xsec_mass_err[i]/xsec_mass[i]<<" & "<<unc_mass[i]/xsec_mass[i]<<" % relative unc"<<" and "<<sqrt(pow(xsec_mass_err[i],2)+pow(unc_mass[i],2))<<" total unc"<<std::endl; 
  }
  for (int i=0; i<8;++i){
   tot_mass_n += pop_mass[i];
   tot_mass += xsec_mass[i] * (massbins[i+1]-massbins[i]);
   tot_stat_mass += pow(xsec_mass_err[i]* (massbins[i+1]-massbins[i]),2);
   tot_syst_mass += (unc_mass[i]/xsec_mass[i])*pop_mass[i];
   tot_tp_mass += (0.5*tp_mass[i])*pop_mass[i];
   tot_bf_mass += ((binfit_plus5_mass[i]-xsec_mass[i])/xsec_mass[i])*pop_mass[i];
  }
  std::cout<<" Total Stat : Syst : "<< tot_mass<<" "<<sqrt(tot_stat_mass) <<" " <<(tot_syst_mass/tot_mass_n)*tot_mass<<" Relative: "<<sqrt(tot_stat_mass)/tot_mass<<"  "<<tot_syst_mass/tot_mass_n<<" "<<"TnP: "<<tot_tp_mass/tot_mass_n<<" BnFit: "<<tot_bf_mass/tot_mass_n<<std::endl;
  for (int i=0; i<8;++i){ //mass 2 fitting relative per bin instead of absolute like above
    unc_mass2[i] = sqrt(pow((binfit_plus5_mass[i]-xsec_mass[i])/xsec_mass[i],2)+pow(PerBinFixed,2)+pow(Bkg2P,2)+pow(SigCB,2)+pow(JAcc,2)+pow(0.5*tp_mass[i],2));
    std::cout<<"Mass Bin: "<<i+1<<" Cross Section systematic: "<<xsec_mass[i]<<" +/- "<<xsec_mass_err[i]<<" +/- "<<unc_mass2[i]*xsec_mass[i]<<" which is "<<xsec_mass_err[i]/xsec_mass[i]<<" & "<<unc_mass2[i]<<" % relative unc"<<" and "<<sqrt(pow(xsec_mass_err[i],2)+pow(unc_mass[i],2))<<" total unc"<<std::endl; 
  }
  for (int i=0; i<8;++i){
   tot_syst_mass2 += (unc_mass2[i])*pop_mass[i];
  }
  std::cout<<" Total Stat : Syst : "<< tot_mass<<" "<<sqrt(tot_stat_mass) <<" " <<(tot_syst_mass2/tot_mass_n)*tot_mass<<" Relative: "<<sqrt(tot_stat_mass)/tot_mass<<"  "<<tot_syst_mass2/tot_mass_n<<" "<<"TnP: "<<tot_tp_mass/tot_mass_n<<" BnFit: "<<tot_bf_mass/tot_mass_n<<std::endl;
    for (int i=0; i<7;++i){
    //unc_pt[i] = sqrt(pow(abs(binfit_plus5_pt[i]-xsec_pt[i])/(xsec_pt[i]),2)+pow(PerBinFixed,2)+pow(Bkg2P,2)+pow(SigCB,2)+pow(JAcc,2)+pow(0.5*tp_pt[i],2));
    unc_pt[i] = sqrt(pow(abs(binfit_plus5_pt[i]-xsec_pt[i])/(0.5*(binfit_plus5_pt[i]+xsec_pt[i])),2)+pow(PerBinFixed,2)+pow(Bkg2P,2)+pow(SigCB,2)+pow(JAcc,2)+pow(0.5*tp_pt[i],2));
    //std::cout<<"pT Bin: "<<i+1<<" Cross Section systematic: "<<xsec_pt[i]<<" +/- "<<xsec_pt_err[i]<<" +/- "<<unc_pt[i]*xsec_pt[i]<<" which is "<<xsec_pt_err[i]/xsec_pt[i]<<" & "<<unc_pt[i]<<" % relative unc"<<std::endl; 
    unc_pt2[i] = sqrt(pow(binfit_plus5_pt[i]-xsec_pt[i],2)+pow(PerBinFixed*xsec_pt[i],2)+pow(Bkg2P*xsec_pt[i],2)+pow(SigCB*xsec_pt[i],2)+pow(JAcc*xsec_pt[i],2)+pow(0.5*tp_pt[i]*xsec_pt[i],2));
    std::cout<<"pT2 Bin: "<<i+1<<" Cross Section systematic: "<<xsec_pt[i]<<" +/- "<<xsec_pt_err[i]<<" +/- "<<unc_pt2[i]<<" which is "<<xsec_pt_err[i]/xsec_pt[i]<<" & "<<unc_pt2[i]/xsec_pt[i]<<" % relative unc"<<" and "<<sqrt(pow(xsec_pt_err[i],2)+pow(unc_pt2[i],2))<<" total unc"<<std::endl; 
    }
  for (int i=0; i<7;++i){
   tot_pt_n += pop_pt[i];
   tot_stat_pt += pow(xsec_pt_err[i]* (ptbins[i+1]-ptbins[i]),2);
   tot_syst_pt += pow((unc_pt[i]*xsec_pt[i])*(ptbins[i+1]-ptbins[i]),2);
   tot_syst_pt2 += (unc_pt2[i]/xsec_pt[i])*pop_pt[i];
   tot_pt += xsec_pt[i] * (ptbins[i+1]-ptbins[i]);
   tot_tp_pt += (0.5*tp_pt[i])*pop_pt[i];
   tot_bf_pt += sqrt(pow(binfit_plus5_pt[i]-xsec_pt[i],2))/xsec_pt[i]*pop_pt[i];
  }
  //std::cout<<" Total Stat : Syst : "<< sqrt(tot_stat_pt) <<" " <<sqrt(tot_syst_pt)<<std::endl;
  //std::cout<<" Total Stat : Syst : "<< tot_pt<<" "<<sqrt(tot_stat_pt) <<" " <<sqrt(tot_syst_pt)<<" Relative: "<<sqrt(tot_stat_pt)/tot_pt<<"  "<<sqrt(tot_syst_pt)/tot_pt<<std::endl;
  std::cout<<" Total Stat : Syst : "<< tot_pt<<" "<<sqrt(tot_stat_pt) <<" " <<(tot_syst_pt2/tot_pt_n)*tot_pt<<" Relative: "<<sqrt(tot_stat_pt)/tot_pt<<"  "<<(tot_syst_pt2/tot_pt_n)<<" "<<"TnP: "<<tot_tp_pt/tot_pt_n<<" BnFit: "<<tot_bf_pt/tot_pt_n<<std::endl;
    for (int i=0; i<8;++i){
    unc_dy[i] = sqrt(pow(binfit_plus5_dy[i]-xsec_dy[i],2)+pow(PerBinFixed*xsec_dy[i],2)+pow(Bkg2P*xsec_dy[i],2)+pow(SigCB*xsec_dy[i],2)+pow(JAcc*xsec_dy[i],2)+pow(0.5*tp_dy[i]*xsec_dy[i],2));
    std::cout<<"dY Bin: "<<i+1<<" Cross Section systematic: "<<xsec_dy[i]<<" +/- "<<xsec_dy_err[i]<<" +/- "<<unc_dy[i]<<" which is "<<xsec_dy_err[i]/xsec_dy[i]<<" & "<<unc_dy[i]/xsec_dy[i]<<" % relative unc"<<" and "<<sqrt(pow(xsec_dy_err[i],2)+pow(unc_dy[i],2))<<" total unc"<<std::endl; 
    }
  for (int i=0; i<8;++i){
   tot_dy_n += pop_dy[i];
   tot_stat_dy += pow((xsec_dy_err[i])* (dybins[i+1]-dybins[i]),2);
   tot_syst_dy += (unc_dy[i]/xsec_dy[i])*pop_dy[i];
   tot_dy += xsec_dy[i] * (dybins[i+1]-dybins[i]);
   tot_tp_dy += (0.5*tp_dy[i])*pop_dy[i];
   tot_bf_dy += sqrt(pow(binfit_plus5_dy[i]-xsec_dy[i],2))/xsec_dy[i]*pop_dy[i];
  }
  std::cout<<" Total Stat : Syst : "<< tot_dy<<" "<<sqrt(tot_stat_dy) <<" " <<(tot_syst_dy/tot_dy_n)*tot_dy<<" Relative: "<<sqrt(tot_stat_dy)/tot_dy<<"  "<<(tot_syst_dy/tot_dy_n)<<" "<<"TnP: "<<tot_tp_dy/tot_dy_n<<" BnFit: "<<tot_bf_dy/tot_dy_n<<std::endl;
    for (int i=0; i<9;++i){
    unc_y[i] = sqrt(pow(binfit_plus5_y[i]-xsec_y[i],2)+pow(PerBinFixed*xsec_y[i],2)+pow(Bkg2P*xsec_y[i],2)+pow(SigCB*xsec_y[i],2)+pow(JAcc*xsec_y[i],2)+pow(0.5*tp_y[i]*xsec_y[i],2));
    std::cout<<"Y Bin: "<<i+1<<" Cross Section systematic: "<<xsec_y[i]<<" +/- "<<xsec_y_err[i]<<" +/- "<<unc_y[i]<<" which is "<<xsec_y_err[i]/xsec_y[i]<<" & "<<unc_y[i]/xsec_y[i]<<" % relative unc"<<" and "<<sqrt(pow(xsec_y_err[i],2)+pow(unc_y[i],2))<<" total unc"<<std::endl; 
  }
  for (int i=0; i<9;++i){
   tot_y_n += pop_y[i];
   tot_stat_y += pow((xsec_y_err[i])* (ybins[i+1]-ybins[i]),2);
   tot_syst_y += (unc_y[i]/xsec_y[i])*pop_y[i];
   tot_y += xsec_y[i] * (ybins[i+1]-ybins[i]);
   tot_tp_y += (0.5*tp_y[i])*pop_y[i];
   tot_bf_y += sqrt(pow(binfit_plus5_y[i]-xsec_y[i],2))/xsec_y[i]*pop_y[i];
  }
  std::cout<<" Total Stat : Syst : "<< tot_y<<" "<<sqrt(tot_stat_y) <<" " <<(tot_syst_y/tot_y_n)*tot_y<<" Relative: "<<sqrt(tot_stat_y)/tot_y<<"  "<<(tot_syst_y/tot_y_n)<<" "<<"TnP: "<<tot_tp_y/tot_y_n<<" BnFit: "<<tot_bf_y/tot_y_n<<std::endl;
}
