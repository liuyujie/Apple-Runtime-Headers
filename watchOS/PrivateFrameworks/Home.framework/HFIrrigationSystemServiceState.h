//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Home/HFServiceState.h>

@interface HFIrrigationSystemServiceState : HFServiceState
{
    unsigned int _type;
}

+ (unsigned int)_typeForActiveState:(_Bool)arg1 usageState:(int)arg2 programMode:(int)arg3;
+ (id)requiredCharacteristicTypes;
+ (id)stateClassIdentifier;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (int)priority;
- (int)primaryState;
- (id)stateTypeIdentifier;
- (id)initWithBatchReadResponse:(id)arg1;

@end

