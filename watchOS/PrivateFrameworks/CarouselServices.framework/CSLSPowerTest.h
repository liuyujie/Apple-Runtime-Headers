//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface CSLSPowerTest : NSObject <NSSecureCoding>
{
    NSString *_bundleID;
    NSArray *_operations;
    double _interDelay;
}

+ (id)powerTestWithBundleID:(id)arg1 interDelay:(double)arg2 operations:(id)arg3;
+ (id)parseStringOperations:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *operations; // @synthesize operations=_operations;
@property(nonatomic) double interDelay; // @synthesize interDelay=_interDelay;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithBundleID:(id)arg1 interDelay:(double)arg2 operations:(id)arg3;

@end
