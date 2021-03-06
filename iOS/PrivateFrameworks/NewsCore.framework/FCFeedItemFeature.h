//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface FCFeedItemFeature : NSObject <NSCopying>
{
    _Bool _queryable;
    NSString *_key;
    long long _type;
}

+ (id)featureForAllArticles;
+ (id)featureForPaidCoverArt;
+ (id)featureForCoverArt;
+ (id)featureForTopicID:(id)arg1;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) _Bool queryable; // @synthesize queryable=_queryable;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *topicID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithType:(long long)arg1 key:(id)arg2;

@end

