//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NearField/NFSession.h>

#import "NFNdefTagSessionCallbacks.h"

@class NFWeakReference, NSString;

@interface NFNdefTagSession : NFSession <NFNdefTagSessionCallbacks>
{
    NFWeakReference *_delegate;
}

+ (id)generateBluetoothLESecureNdefPayloadWithOOBData:(id)arg1;
- (BOOL)enableWrite:(BOOL)arg1 error:(id *)arg2;
- (BOOL)enableWrite:(BOOL)arg1;
- (id)getTagMessageWithError:(id *)arg1;
- (id)getTagMessage;
- (id)getTagDataWithError:(id *)arg1;
- (id)getTagData;
- (BOOL)setTagData:(id)arg1 error:(id *)arg2;
- (BOOL)setTagData:(id)arg1;
- (BOOL)setTagMessage:(id)arg1 error:(id *)arg2;
- (BOOL)setTagMessage:(id)arg1;
- (BOOL)stopEmulationWithError:(id *)arg1;
- (BOOL)stopEmulation;
- (BOOL)startEmulation:(id)arg1 withMessageType:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)startEmulation:(id)arg1 withMessageType:(unsigned int)arg2;
- (BOOL)startEmulationWithNdefMessage:(id)arg1 withMessageType:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)startEmulationWithNdefMessage:(id)arg1 withMessageType:(unsigned int)arg2;
- (void)didTagStateChange:(unsigned int)arg1;
- (void)didEndUnexpectedly;
- (void)endSession;
@property id <NFNdefTagSessionDelegate> delegate;
- (void)dealloc;
- (BOOL)startBluetoothLESecureConnectionWithOOBData:(id)arg1;
- (BOOL)startBluetoothLESecureConnectionWithDeviceAddress:(id)arg1 optionalOOBData:(id)arg2;
- (BOOL)startBluetoothLEPairingWithDeviceAddress:(id)arg1 role:(unsigned char)arg2 optionalOOBData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
