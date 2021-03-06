//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface AVKeyValueChange : NSObject
{
    NSDictionary *_changes;
    NSString *_keyPath;
    id _observationToken;
}

@property(readonly, nonatomic) id observationToken; // @synthesize observationToken=_observationToken;
@property(readonly, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (void).cxx_destruct;
- (id)object:(id)arg1 as:(Class)arg2;
- (id)objectOrNilFor:(id)arg1;
@property(readonly, nonatomic, getter=isInitialValue) _Bool initialValue;
@property(readonly, nonatomic) id oldValue;
@property(readonly, nonatomic) id value;
- (id)initWithChanges:(id)arg1 keyPath:(id)arg2 observationToken:(id)arg3;

@end

