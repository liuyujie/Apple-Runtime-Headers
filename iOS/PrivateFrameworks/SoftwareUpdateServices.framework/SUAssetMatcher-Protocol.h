//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MAAsset, MAMsuDownloadOptions, NSArray, NSDictionary, NSString;

@protocol SUAssetMatcher <NSObject>
@property(readonly, nonatomic) NSDictionary *matcherInfo;
@property(readonly, nonatomic) NSString *assetType;
- (void)modifyMADownloadOptions:(MAMsuDownloadOptions *)arg1;
- (MAAsset *)findMatchFromCandidates:(NSArray *)arg1 error:(id *)arg2;
@end

