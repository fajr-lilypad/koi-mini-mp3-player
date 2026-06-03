//play file
void startFolderPlay() {
  filecounts = myDFPlayer.readFileCountsInFolder(folder);
  myDFPlayer.playFolder(folder, file);
  playing = false;
}

void updateDFplayer()
{
    // If filecounts is still 0, keep trying to read it
  if (filecounts == 0) {
    filecounts = myDFPlayer.readFileCountsInFolder(folder);
    if (filecounts > 0) updateScreen = true; // Refresh screen when count is found
  }
    // check player status
  if (myDFPlayer.available()) {
    uint8_t type = myDFPlayer.readType();
    int value = myDFPlayer.read();

    switch (type) {
      case DFPlayerPlayFinished:
          file++;

        if (file > filecounts) {
          file = 1;
        }
          myDFPlayer.playFolder(folder, file);
          EEPROM.write(2, file);
          updateScreen = true;
        
        break;
      default:
        break;
    }
  } 

}
