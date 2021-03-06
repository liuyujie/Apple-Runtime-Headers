//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class CPLResetTracker;

@interface CPLChangeSessionContext : NSObject <NSSecureCoding>
{
    unsigned int _estimatedInitialAssetCountForLocalLibrary;
    CPLResetTracker *_resetTracker;
    unsigned long long _estimatedInitialSizeForLocalLibrary;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) CPLResetTracker *resetTracker; // @synthesize resetTracker=_resetTracker;
@property(nonatomic) unsigned int estimatedInitialAssetCountForLocalLibrary; // @synthesize estimatedInitialAssetCountForLocalLibrary=_estimatedInitialAssetCountForLocalLibrary;
@property(nonatomic) unsigned long long estimatedInitialSizeForLocalLibrary; // @synthesize estimatedInitialSizeForLocalLibrary=_estimatedInitialSizeForLocalLibrary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

