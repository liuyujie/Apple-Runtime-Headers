//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMAccessorySetting, NAFuture, NSDate, NSError, NSNumber;

@interface _HFMediaProfileContainerSettingsWriteValueTransaction : NSObject
{
    _Bool _started;
    NAFuture *_settingWriteFuture;
    NSError *_error;
    NSDate *_transactionStartDate;
    id _value;
    id _previousValue;
    unsigned int _changeType;
    HMAccessorySetting *_setting;
    NSNumber *_transactionNumber;
}

@property(readonly, nonatomic) NSNumber *transactionNumber; // @synthesize transactionNumber=_transactionNumber;
@property(readonly, nonatomic) HMAccessorySetting *setting; // @synthesize setting=_setting;
@property(readonly, nonatomic) unsigned int changeType; // @synthesize changeType=_changeType;
@property(readonly, copy, nonatomic) id previousValue; // @synthesize previousValue=_previousValue;
@property(readonly, copy, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) NSDate *transactionStartDate; // @synthesize transactionStartDate=_transactionStartDate;
@property(nonatomic, getter=hasStarted) _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NAFuture *settingWriteFuture; // @synthesize settingWriteFuture=_settingWriteFuture;
- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilder;
- (id)init;
- (id)initWithSetting:(id)arg1 previousValue:(id)arg2 value:(id)arg3 changeType:(unsigned int)arg4;

@end

