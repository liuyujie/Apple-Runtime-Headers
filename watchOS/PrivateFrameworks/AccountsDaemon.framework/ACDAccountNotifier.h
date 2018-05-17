//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSSet;

@interface ACDAccountNotifier : NSObject
{
    NSSet *_notificationPlugins;
    NSDictionary *_pluginBundlesByAccountTypeID;
    NSMutableDictionary *_instantiatedPluginsByAccountTypeID;
    NSMutableDictionary *_principalObjectByPluginBundleURL;
}

+ (id)_presumedAccountTypeIDsByNotificationPluginID;
+ (id)sharedAccountNotifier;
- (void).cxx_destruct;
- (id)notificationPlugins;
- (void)postDidPerformDataclassActionsOnAccount:(id)arg1 forDataclasses:(id)arg2;
- (void)postWillPerformDataclassActionsOnAccount:(id)arg1 forDataclasses:(id)arg2;
- (void)postDidChangeNotificationForType:(int)arg1 inStore:(id)arg2 newAccount:(id)arg3 oldAccount:(id)arg4;
- (_Bool)postWillChangeNotificationForType:(int)arg1 inStore:(id)arg2 newAccount:(id)arg3 oldAccount:(id)arg4;
- (_Bool)canRemoveAccount:(id)arg1 inStore:(id)arg2;
- (_Bool)canSaveAccount:(id)arg1 inStore:(id)arg2;
- (id)_generateMapOfNotificationPluginBundlesByAccountTypeID;
- (id)_loadPrincipalObjectFromBundle:(id)arg1;
- (id)_loadPrincipalObjectsFromBundles:(id)arg1;
- (id)_pluginsRegisteredForAccountType:(id)arg1;
- (id)init;
- (void)_faultInNotificationPlugins;

@end
