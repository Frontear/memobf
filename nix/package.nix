{
  stdenv,
  lib
}:
let
  inherit (lib) cleanSource;
in stdenv.mkDerivation {
  pname = "memobf";
  version = "0.1.0";

  src = cleanSource ../src;

  dontConfigure = true;
  dontBuild = true;

  installPhase = ''
    mkdir -p $out/include

    cp $src/include/* $out/include
  '';

  meta = with lib; {
    description = "A dead simple memory obfuscation library, capable of obfuscating any memory buffer with a given key.";
    homepage = "https://github.com/Frontear/memobf";
    license = licenses.gpl3;
    maintainers = with maintainers; [ frontear ];
  };
}
