//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaRemote/MRProtocolClientConnection.h>

@class MRCryptoPairingSession;

@interface MRExternalClientConnection : MRProtocolClientConnection
{
    _Bool _registeredToNowPlayingUpdates;
    _Bool _registeredToVolumeUpdates;
    _Bool _registeredKeyboardUpdates;
    _Bool _registeredToOutputDeviceUpdates;
    _Bool _cryptoEnabled;
    unsigned int _voiceRecordingState;
    MRCryptoPairingSession *_cryptoSession;
}

@property(nonatomic) _Bool cryptoEnabled; // @synthesize cryptoEnabled=_cryptoEnabled;
@property(retain, nonatomic) MRCryptoPairingSession *cryptoSession; // @synthesize cryptoSession=_cryptoSession;
@property(nonatomic) unsigned int voiceRecordingState; // @synthesize voiceRecordingState=_voiceRecordingState;
@property(nonatomic) _Bool registeredToOutputDeviceUpdates; // @synthesize registeredToOutputDeviceUpdates=_registeredToOutputDeviceUpdates;
@property(nonatomic) _Bool registeredKeyboardUpdates; // @synthesize registeredKeyboardUpdates=_registeredKeyboardUpdates;
@property(nonatomic) _Bool registeredToVolumeUpdates; // @synthesize registeredToVolumeUpdates=_registeredToVolumeUpdates;
@property(nonatomic) _Bool registeredToNowPlayingUpdates; // @synthesize registeredToNowPlayingUpdates=_registeredToNowPlayingUpdates;
- (void).cxx_destruct;
- (id)decryptData:(id)arg1 error:(id *)arg2;
- (id)encryptDataForMessage:(id)arg1;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2 runLoop:(id)arg3;

@end

