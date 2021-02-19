{
  description = "C++ Hello World";

  outputs = { self, nixpkgs }: {

    packages.x86_64-linux.hello =
      let
        pkgs = nixpkgs.legacyPackages.x86_64-linux;
      in
        pkgs.stdenv.mkDerivation {
          name = "hello";
          src = ./.;
          nativeBuildInputs = [ pkgs.cmake ];
        };

    defaultPackage.x86_64-linux = self.packages.x86_64-linux.hello;

  };
}
