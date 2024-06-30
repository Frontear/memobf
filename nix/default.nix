{ ... }: {
  perSystem = { self', pkgs, ... }: {
    apps.default = {
      type = "app";
      program = pkgs.callPackage ./app.nix { inherit self'; };
    };

    devShells.default = pkgs.callPackage ./shell.nix { inherit self'; };

    packages.default = pkgs.callPackage ./package.nix { };
  };
}
