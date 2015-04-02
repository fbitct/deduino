//If you sleep for too long, have the dispalys go dark to save them from burning.
void goDark() {
  // Fuel Flow
#ifdef FuelFlow_on
  for (short i = 0; i < 5; i++ ) {
    FuelFlow[i] = 0;
  }
#endif

  //DED
#ifdef DED_on
  for (short i = 0; i < 5; i++ ) {
    for (short j = 0; j < 26; j++)
      DED[i][j] = 0;
  }
#endif

#ifdef PFD_on
  for (short i = 0; i < 5; i++ ) {
    for (short j = 0; j < 26; j++)
      PFD[i][j] = 0;
  }
#endif

  // Indexers
#ifdef Indexers_on
  AoaIndexer[0] = 0;
#endif

#ifdef CautionPanel_on
  for (short i = 0; i < 4; i++ ) {
    CautionPanel[i] = 0;
  }
#endif
}
