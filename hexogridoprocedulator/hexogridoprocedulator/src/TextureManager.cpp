#include "TextureManager.h"

void TextureManager::loadTexture(const string &name, string filename) {
  Texture* tex = new Texture();

  /* loading texture from file */
  if (!tex->loadFromFile("assets/textures/" + filename)) {
    system("pause");
    exit(-1);
  }

  /* setting smoothing for texture and adding it to map of textures*/
  tex->setSmooth(true);
  this->textures[name] = *tex;

  return;
}

Texture& TextureManager::getTexture(const string &texture) {
  return this->textures.at(texture);
}

/* loading all textures on texture manager creating*/
TextureManager::TextureManager() {
  // loadTexture("logo", "logo.png");
}

TextureManager::~TextureManager() {}