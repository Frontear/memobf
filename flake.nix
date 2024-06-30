{
  inputs = {
    flake-parts.url = "github:hercules-ci/flake-parts";
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-24.05";
  };

  outputs = inputs@{ flake-parts, ... }: flake-parts.lib.mkFlake { inherit inputs; } {
    systems = [ "x86_64-linux" "aarch64-linux" "aarch64-darwin" "x86_64-darwin" ];
    perSystem = { config, self', inputs', pkgs, system, ... }: {
      apps.default = {
        type = "app";
        program = pkgs.callPackage ./nix/app.nix { inherit self'; };
      };

      devShells.default = import ./nix/shell.nix { inherit self' pkgs; };

      packages.default = pkgs.callPackage ./nix/package.nix { };
    };
  };
}
