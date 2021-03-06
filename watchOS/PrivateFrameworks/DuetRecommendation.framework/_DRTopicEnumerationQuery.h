//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_DKQuery.h"

#import "_DKExecutableQuery.h"

@class NSObject<OS_dispatch_queue>, NSPredicate;

@interface _DRTopicEnumerationQuery : _DKQuery <_DKExecutableQuery>
{
    NSObject<OS_dispatch_queue> *_defaultQueue;
    NSPredicate *_predicate;
    unsigned int _limit;
    CDUnknownBlockType _topicEnumerator;
}

+ (id)enumerationSumExpression;
+ (id)enumerationCountExpresion;
+ (id)topicEnumerationQueryWithPredicate:(id)arg1 topicEnumerator:(CDUnknownBlockType)arg2;
@property(copy) CDUnknownBlockType topicEnumerator; // @synthesize topicEnumerator=_topicEnumerator;
@property unsigned int limit; // @synthesize limit=_limit;
@property(retain) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (id)executeUsingCoreDataStorage:(id)arg1 error:(id *)arg2;
- (id)handleResults:(id)arg1 error:(id)arg2;
- (id)initWithPredicate:(id)arg1 topicEnumerator:(CDUnknownBlockType)arg2;

@end

