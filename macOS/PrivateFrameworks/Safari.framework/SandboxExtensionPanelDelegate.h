//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSOpenSavePanelDelegate.h"

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface SandboxExtensionPanelDelegate : NSObject <NSOpenSavePanelDelegate>
{
    NSURL *_url;
    NSURL *_referenceURL;
    NSString *_path;
}

- (void).cxx_destruct;
- (BOOL)panel:(id)arg1 validateURL:(id)arg2 error:(id *)arg3;
- (BOOL)panel:(id)arg1 shouldEnableURL:(id)arg2;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
