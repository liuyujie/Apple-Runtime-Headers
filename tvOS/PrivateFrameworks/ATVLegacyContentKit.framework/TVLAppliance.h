//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVLReadWriteFeedResource.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, NSURL, TVLApplianceViewController, TVLLegacyJSContext, TVLPreferenceFeedResource;

@interface TVLAppliance : NSObject <TVLReadWriteFeedResource>
{
    NSDictionary *_appDictionary;
    _Bool _allowiCloudAuth;
    long long _controllerTransactionCount;
    _Bool _navControllerSyncScheduled;
    TVLPreferenceFeedResource *_preferenceResource;
    NSDictionary *_rootDictionary;
    NSMutableArray *_stackTransactionBlocks;
    TVLApplianceViewController *_viewController;
    id <TVLApplianceDelegate> _delegate;
    long long _applianceType;
    NSString *_vendorIdentifier;
    NSString *_displayName;
    NSURL *_rootURL;
    NSURL *_javascriptURL;
    NSURL *_supportURL;
    TVLLegacyJSContext *_javaScriptContext;
    id <TVLReadWriteFeedResource> _sessionResource;
    NSDictionary *_launchOptions;
}

+ (id)_systemVersion;
+ (id)defaultHTTPHeaders;
+ (id)applianceForVendorBagDictionary:(id)arg1;
+ (id)applianceForInfoDictionary:(id)arg1;
+ (_Bool)isInfoPlistApplianceForDictionary:(id)arg1;
@property(readonly, nonatomic) TVLApplianceViewController *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
@property(readonly, nonatomic) id <TVLReadWriteFeedResource> sessionResource; // @synthesize sessionResource=_sessionResource;
@property(readonly, nonatomic) _Bool allowiCloudAuth; // @synthesize allowiCloudAuth=_allowiCloudAuth;
@property(retain, nonatomic) TVLLegacyJSContext *javaScriptContext; // @synthesize javaScriptContext=_javaScriptContext;
@property(readonly, copy, nonatomic) NSURL *supportURL; // @synthesize supportURL=_supportURL;
@property(readonly, copy, nonatomic) NSURL *javascriptURL; // @synthesize javascriptURL=_javascriptURL;
@property(readonly, copy, nonatomic) NSURL *rootURL; // @synthesize rootURL=_rootURL;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *vendorIdentifier; // @synthesize vendorIdentifier=_vendorIdentifier;
@property(nonatomic) long long applianceType; // @synthesize applianceType=_applianceType;
@property(nonatomic) __weak id <TVLApplianceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)restorationPathForController:(id)arg1;
- (void)prettyPrintControllerStack;
- (void)endControllerTransaction;
- (void)startControllerTransaction;
- (void)performControllerTransaction:(CDUnknownBlockType)arg1;
- (void)_swapController:(id)arg1 forController:(id)arg2;
- (void)swapController:(id)arg1;
- (void)removeController:(id)arg1;
- (void)pushController:(id)arg1;
- (void)popController;
- (void)popToRootController;
- (void)_setNeedsNavControllerSync;
- (void)_finishControllerSync;
- (void)playerWindowDidHide:(id)arg1;
- (void)controllerStackDidChange:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *controllerStack;
@property(readonly, nonatomic) _Bool shouldAllowRemoteInspectionOfJSContext;
- (void)_removeJavaScript;
- (void)runJavaScriptEntryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)installJavaScriptWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_isValidForSystemVersionWithBag:(id)arg1;
- (id)_extractDisplayNameFromVendorBagDictionary:(id)arg1;
@property(readonly, nonatomic) NSDictionary *appDictionary;
- (void)stopApplication;
- (void)startApplicationWithCompletion:(CDUnknownBlockType)arg1;
- (id)generateRequestForURL:(id)arg1 headers:(id)arg2 method:(id)arg3 body:(id)arg4;
- (void)decorateRequestProperties:(id)arg1;
- (void)clearFeedResources;
- (void)setFeedResource:(id)arg1 named:(id)arg2;
- (id)feedResourceNamed:(id)arg1;
- (void)_commonInit;
- (id)initWithVendorBagDictionary:(id)arg1;
- (id)initWithInfoDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
