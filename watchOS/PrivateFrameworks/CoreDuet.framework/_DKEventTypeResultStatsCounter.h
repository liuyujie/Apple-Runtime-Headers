//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_DKEventStatsCounterInternalProperty.h"

@class _DKEventStatsCounterInternal;

@interface _DKEventTypeResultStatsCounter : NSObject <_DKEventStatsCounterInternalProperty>
{
    _DKEventStatsCounterInternal *_internal;
}

+ (id)counterInCollection:(id)arg1 withEventName:(id)arg2 eventType:(id)arg3 eventTypePossibleValues:(id)arg4;
@property(retain) _DKEventStatsCounterInternal *internal; // @synthesize internal=_internal;
- (void).cxx_destruct;
- (unsigned int)countWithTypeValue:(id)arg1 success:(_Bool)arg2;
- (void)incrementCountByNumber:(unsigned int)arg1 typeValue:(id)arg2 success:(_Bool)arg3;
- (void)incrementCountWithTypeValue:(id)arg1 success:(_Bool)arg2;
- (id)typeValues;
- (id)eventType;
- (id)eventName;

@end

