//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASAsset, NSMutableDictionary, NSString;

@interface _PASAssetGuardedData : NSObject
{
    NSString *_defaultBundlePath;
    unsigned long long _defaultBundleVersion;
    unsigned long long _bestAvailableVersion;
    unsigned long long _bestAssetVersionObserved;
    ASAsset *_bestAvailableAsset;
    NSMutableDictionary *_overrides;
}

- (void).cxx_destruct;

@end
