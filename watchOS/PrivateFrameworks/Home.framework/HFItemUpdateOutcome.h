//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSArray, NSDictionary;

@interface HFItemUpdateOutcome : NSObject <NSCopying, NSMutableCopying>
{
    NSDictionary *_results;
    unsigned int _outcomeType;
}

+ (id)outcomeWithResults:(id)arg1;
@property(nonatomic) unsigned int outcomeType; // @synthesize outcomeType=_outcomeType;
@property(readonly, nonatomic) NSDictionary *results; // @synthesize results=_results;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSArray *allKeys;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithResults:(id)arg1;
- (id)init;
- (id)initWithResults:(id)arg1 type:(unsigned int)arg2;

@end
