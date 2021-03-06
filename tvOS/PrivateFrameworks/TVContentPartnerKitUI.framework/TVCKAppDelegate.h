//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVStoreApplicationDelegate.h"

#import "TVInterfaceCreating.h"
#import "_TVInterfaceCreatingPrivate.h"

@class NSString;

@interface TVCKAppDelegate : TVStoreApplicationDelegate <_TVInterfaceCreatingPrivate, TVInterfaceCreating>
{
}

+ (void)setupUIFactoryWithBootURL:(id)arg1 defaultBootURL:(id)arg2;
+ (void)exposeDefaultObjectsInJSContext:(id)arg1;
+ (void)exposeObjectsInJSContext:(id)arg1;
+ (void)load;
- (void)_registerTemplateStyleSheets;
- (id)_styleSheetURLForTemplate:(id)arg1;
- (id)imageForResource:(id)arg1;
- (id)URLForResource:(id)arg1;
- (void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (void)setupWithBootURL:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

