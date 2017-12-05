using UnityEngine;
using UnityEditor;
using System.Collections;
using System.Collections.Generic;
using System.IO;

namespace cn.sharesdk.unity3d.sdkporter
{
	public class XCodeEditorMenu
	{

		//[MenuItem ("Build Tools/XCode Editor/DebugTest %t")]
		static void DebugTest()
		{	
//			string projectPath = Path.Combine( Directory.GetParent( Application.dataPath ).ToString(), "XCode" );
//			DebugLogger.Log( "XcodePath: " + projectPath );
			
//			XCProject currentProject = new XCProject( projectPath );
			//XCProject.ApplyMod( projectPath, "/Users/Elyn/Projects/UnityPlugins/Unity Sandbox Project/Assets/Modules/GameCenter/Editor/iOS/GameCenter.projmods" );
			
			//DebugLogger.Log(
//			PBXDictionary test = new PBXDictionary();
//			bool result = false;
//			if( test is Dictionary<string, object> )
//				result = true;
//			
//			DebugLogger.Log( result );
			
//			PBXType type = new PBXType();
//			DebugLogger.Log( "TYPE: " + type["isa"] );
//			
//			PBXBuildFile build = new PBXBuildFile( "" );
//			DebugLogger.Log( "BUILDFILE: " + build["isa"] );
			
//			DebugLogger.Log( PBXObject.GenerateGuid().ToUpper() );
//			PBXList testList = currentProject.GetObjectOfType( "XCBuildConfiguration" );
//			DebugLogger.Log( testList.Count );
//			DebugLogger.Log( currentProject.rootGroup.guid + " " + currentProject.rootGroup.name + " " + currentProject.rootGroup.path);
//			string path1 = "Data/mainData";

//			string path2 = "/Users/Elyn/Projects/UnityPlugins/Modules/GameCenter/Editor/iOS/";
//			DebugLogger.Log( "Objects: " + currentProject._objects.Count );
//			DebugLogger.Log( "Files: " + currentProject.buildFiles.Count );
//			DebugLogger.Log( "Groups: " + currentProject.groups.Count );
//			string[] excludes = new string[] {"^.*\\.meta$", "^.*\\.mdown^", "^.*\\.pdf$"};
//			currentProject.AddFolder( path2, null, excludes );
//			currentProject.Consolidate();
//			DebugLogger.Log( "Objects: " + currentProject._objects.Count );
//			currentProject.Save();
			
			//ALTRO
//			currentProject.AddOtherCFlags( "TEST_FLAG" );
//			
//			foreach( KeyValuePair<string, XCBuildConfiguration> config in currentProject.buildConfigurations ) {
//				DebugLogger.Log( "C: " + config.Value.buildSettings["OTHER_CFLAGS"] );
//				foreach( string keys in (PBXList)config.Value.buildSettings["OTHER_CFLAGS"]  )
//					DebugLogger.Log( keys );
//			}
			
//			currentProject.Save();
			
		}
		
		
		//[MenuItem ("Build Tools/XCode Editor/DebugTest2 %y")]
		static void DebugTest2()
		{
			string path1 = "/Users/Elyn/Projects/UnityPlugins/Unity Sandbox Project/Assets/Modules/GameCenter/Editor/iOS/GameCenterManager.m";
			string path2 = "/Users/Elyn/Projects/UnityPlugins/Unity Sandbox Project/XCode/.";
			
			System.Uri fileURI = new System.Uri( path1 );
			System.Uri rootURI = new System.Uri( path2 );
			DebugLogger.Log( fileURI.MakeRelativeUri( rootURI ).ToString() );
			DebugLogger.Log( rootURI.MakeRelativeUri( fileURI ).ToString() );
			
//			string projectPath = Path.Combine( Directory.GetParent( Application.dataPath ).ToString(), "XCode" );
			
//			string[] files = System.IO.Directory.GetFiles( projectPath, "Info.plist" );
//			string contents = System.IO.File.OpenText( files[0] ).ReadToEnd();
			
//			string[] projects = System.IO.Directory.GetDirectories( projectPath, "*.xcodeproj" );
//			string projPath = System.IO.Path.Combine( projects[0], "project.pbxproj" );
//			string contents = System.IO.File.OpenText( projPath ).ReadToEnd();
//			DebugLogger.Log( System.IO.File.OpenText( projPath ).ReadToEnd );

//			PBXParser parser = new PBXParser();
//			Hashtable test = (Hashtable)parser.Decode( contents );
//			PBXDictionary test = parser.Decode( contents );
//			DebugLogger.Log( MiniJSON.jsonEncode( test ) );
//			DebugLogger.Log( test + " - " + test.Count );
//			DebugLogger.Log( parser.Encode( test ) );
			
			
		}

	}
}