//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MLBatchProvider.h"

__attribute__((visibility("hidden")))
@interface MLLazyUnionBatchProvider : NSObject <MLBatchProvider>
{
    id <MLBatchProvider> _first;
    id <MLBatchProvider> _second;
}

@property(retain, nonatomic) id <MLBatchProvider> second; // @synthesize second=_second;
@property(retain, nonatomic) id <MLBatchProvider> first; // @synthesize first=_first;
- (void).cxx_destruct;
- (id)featuresAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long count;
- (id)initWithFeaturesFrom:(id)arg1 addedToFeaturesFrom:(id)arg2 error:(id *)arg3;

@end
