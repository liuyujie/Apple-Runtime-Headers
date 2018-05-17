//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection, TZFileSystemInterface;

@interface TZUpdate : NSObject
{
    TZFileSystemInterface *_fileSystemInterface;
    NSXPCConnection *_connectionToService;
}

+ (id)sharedInstance;
@property(retain) NSXPCConnection *connectionToService; // @synthesize connectionToService=_connectionToService;
@property(retain) TZFileSystemInterface *fileSystemInterface; // @synthesize fileSystemInterface=_fileSystemInterface;
- (void).cxx_destruct;
- (BOOL)isUpdateWaiting;
- (id)updateTZDataVersion;
- (BOOL)alertForAllZones;
- (id)currentTZDataVersion;
- (id)affectedZones;
- (void)purgeAllAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (void)isUpdateWaitingWithCompletion:(CDUnknownBlockType)arg1;
- (id)createNewXPCConnection;
- (id)init;

@end
