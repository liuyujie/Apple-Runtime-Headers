//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaRemote/MRExternalDeviceTransport.h>

@class NSNetService, _MRDeviceInfoMessageProtobuf;

__attribute__((visibility("hidden")))
@interface MRNetServiceTransport : MRExternalDeviceTransport
{
    _MRDeviceInfoMessageProtobuf *_deviceInfo;
    _Bool _requiresCustomPairing;
    NSNetService *_netService;
}

+ (id)createDeviceInfoFromTXTRecord:(id)arg1;
+ (id)createDeviceInfoFromNetService:(id)arg1;
@property(retain, nonatomic) NSNetService *netService; // @synthesize netService=_netService;
- (void).cxx_destruct;
@property(nonatomic) _Bool requiresCustomPairing;
- (void)reset;
- (_Bool)getInputStream:(id *)arg1 outputStream:(id *)arg2;
- (id)error;
- (void)setShouldUseSystemAuthenticationPrompt:(_Bool)arg1;
- (_Bool)shouldUseSystemAuthenticationPrompt;
- (long long)connectionType;
- (long long)port;
- (id)hostname;
- (id)name;
- (id)deviceInfo;
- (void)updateDeviceInfoWithTXTRecord:(id)arg1;
- (id)description;
- (id)initWithNetService:(id)arg1;

@end

