//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_WKDownloadDelegate.h"

@class NSMapTable, NSString;

@interface _SFDownloadDispatcher : NSObject <_WKDownloadDelegate>
{
    NSMapTable *_activeDownloadMap;
    NSMapTable *_pendingDownloadMap;
}

+ (id)sharedDownloadDispatcher;
- (void).cxx_destruct;
- (void)_downloadDidCancel:(id)arg1;
- (void)_download:(id)arg1 didFailWithError:(id)arg2;
- (void)_downloadDidFinish:(id)arg1;
- (void)_download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_download:(id)arg1 didReceiveData:(unsigned long long)arg2;
- (void)_download:(id)arg1 didReceiveResponse:(id)arg2;
- (void)_downloadDidStart:(id)arg1;
- (id)startDownloadFromWebView:(id)arg1 type:(int)arg2 userInitiatedAction:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

