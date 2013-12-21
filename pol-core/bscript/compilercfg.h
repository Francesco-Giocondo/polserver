/*
History
=======

Notes
=======

*/

#ifndef BSCRIPT_COMPILERCFG_H
#define BSCRIPT_COMPILERCFG_H
namespace Pol {
  namespace Bscript {
	struct CompilerConfig
	{
	  vector< std::string > PackageRoot;
	  std::string IncludeDirectory;
	  std::string ModuleDirectory;
	  std::string PolScriptRoot;
	  bool GenerateListing;
	  bool GenerateDebugInfo;
	  bool GenerateDebugTextInfo;
	  bool DisplayWarnings;
	  bool GenerateDependencyInfo;
	  bool CompileAspPages;
	  bool AutoCompileByDefault;
	  bool UpdateOnlyOnAutoCompile;
	  bool OnlyCompileUpdatedScripts;
	  bool DisplaySummary;
	  bool DisplayUpToDateScripts;
	  bool OptimizeObjectMembers;
	  bool ErrorOnWarning;
	  bool ThreadedCompilation;
	  bool ParanoiaWarnings;

	  void Read( const std::string& path );
	  void SetDefaults();
	};

	extern CompilerConfig compilercfg;
  }
}
#endif
