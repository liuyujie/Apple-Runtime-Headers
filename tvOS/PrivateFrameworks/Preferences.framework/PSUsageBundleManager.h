//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray;

@interface PSUsageBundleManager : NSObject
{
    NSDictionary *_bundleMap;
    NSArray *_usageBundleApps;
    NSMutableArray *_storageReporters;
}

- (void).cxx_destruct;
- (void)vendUsageBundleAppsWithHandler:(CDUnknownBlockType)arg1;
- (id)allUsageBundleApps;
- (void)_loadUsageBundlesWithHandler:(CDUnknownBlockType)arg1;

@end

