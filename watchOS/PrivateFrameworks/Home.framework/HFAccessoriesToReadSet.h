//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSNumber;

@interface HFAccessoriesToReadSet : NSObject
{
    NSMutableDictionary *_accessories;
    NSNumber *_transportKey;
}

@property(retain, nonatomic) NSNumber *transportKey; // @synthesize transportKey=_transportKey;
@property(retain, nonatomic) NSMutableDictionary *accessories; // @synthesize accessories=_accessories;
- (void).cxx_destruct;
- (int)count;
- (void)markCharacteristicAsRead:(id)arg1 withLogger:(id)arg2;
- (void)addCharacteristic:(id)arg1;
- (id)initWithTransportType:(id)arg1;

@end

