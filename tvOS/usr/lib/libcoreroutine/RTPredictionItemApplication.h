//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <coreroutine/RTPredictionItem.h>

#import "NSCopying.h"

@class NSString;

@interface RTPredictionItemApplication : RTPredictionItem <NSCopying>
{
    NSString *_bundleId;
}

@property(readonly, copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfidence:(double)arg1 bundleId:(id)arg2;
- (id)init;

@end

