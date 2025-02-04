#pragma once


namespace das {

  struct LineInfoArg;

    void StdDlgInit();

    // shared impl
	bool GetOkCancelFromUser(const char * caption, const char * body);
    bool GetOkFromUser(const char * caption, const char * body);

    // C++ impl
	string GetSaveFileFromUser ( const char * initialFileName , const char * initialPath, const char * filter );
	string GetOpenFileFromUser ( const char * initialPath, const char * filter );
	string GetOpenFolderFromUser ( const char * initialPath );

    // and das bindings
    class Context;
    char * GetSaveFileDlg ( const char * initialFileName , const char * initialPath, const char * filter, Context * ctx, das::LineInfoArg * at );
    char * GetOpenFileDlg ( const char * initialPath, const char * filter, Context * ctx, das::LineInfoArg * at );
    char * GetOpenFolderDlg ( const char * initialPath, Context * ctx, das::LineInfoArg * at );
}