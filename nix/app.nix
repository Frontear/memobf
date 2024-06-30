{
  self',
  stdenv,
  lib,
}:
let
  inherit (lib) cleanSource;

in stdenv.mkDerivation {
  name = "memobf-tester";

  src = cleanSource ../src;

  nativeBuildInputs = [ self'.packages.default ];

  dontConfigure = true;

  buildPhase = ''
    $CC -o memobf-test $src/main.c
  '';

  installPhase = ''
    mkdir -p $out/bin

    cp memobf-test $out/bin
  '';

  meta = with lib; {
    maintainers = with maintainers; [ frontear ];
    mainProgram = "memobf-test";
  };
}
