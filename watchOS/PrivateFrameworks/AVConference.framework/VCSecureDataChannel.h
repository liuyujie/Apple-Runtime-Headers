//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VCTransport;

__attribute__((visibility("hidden")))
@interface VCSecureDataChannel : NSObject
{
    unsigned long _localCallID;
    unsigned long _remoteCallID;
    struct _tls_record_s *tlsRecord;
    id _delegate;
    VCTransport *_transport;
    unsigned int _maxUDPPayloadSize;
}

@property(nonatomic) unsigned int maxUDPPayloadSize; // @synthesize maxUDPPayloadSize=_maxUDPPayloadSize;
@property(readonly, nonatomic) int maxUnencryptedDataSize;
@property(readonly, nonatomic) int maxEncryptedDataSize;
@property(nonatomic) id <VCSecureDataChannelDelegate> delegate;
- (long)convertData:(id)arg1 toEncryptedData:(id *)arg2 encrypted:(_Bool)arg3;
- (long)convertEncryptedData:(id)arg1 toData:(id *)arg2 encrypted:(_Bool)arg3;
- (long)sendData:(id)arg1 messageType:(unsigned int)arg2 encrypted:(_Bool)arg3;
- (long)setupWithSharedSecret:(id)arg1 isCaller:(_Bool)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithLocalCallID:(unsigned long)arg1 remoteCallID:(unsigned long)arg2 isCaller:(_Bool)arg3 sharedSecret:(id)arg4 error:(id *)arg5;

@end

