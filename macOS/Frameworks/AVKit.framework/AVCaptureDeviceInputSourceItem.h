//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureDevice, AVCaptureDeviceInputSource, NSString;

@interface AVCaptureDeviceInputSourceItem : NSObject
{
    BOOL _builtIn;
    AVCaptureDevice *_captureDevice;
    AVCaptureDeviceInputSource *_inputSource;
    NSString *_mediaType;
    AVCaptureDeviceInputSourceItem *_associatedAudioCaptureDeviceInputSourceItem;
}

@property(retain) AVCaptureDeviceInputSourceItem *associatedAudioCaptureDeviceInputSourceItem; // @synthesize associatedAudioCaptureDeviceInputSourceItem=_associatedAudioCaptureDeviceInputSourceItem;
@property(readonly, getter=isBuiltIn) BOOL builtIn; // @synthesize builtIn=_builtIn;
@property(readonly) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(readonly) AVCaptureDeviceInputSource *inputSource; // @synthesize inputSource=_inputSource;
@property(readonly) AVCaptureDevice *captureDevice; // @synthesize captureDevice=_captureDevice;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy) NSString *localizedDisplayName;
- (id)description;
- (id)init;
- (id)initWithDevice:(id)arg1 inputSource:(id)arg2 mediaType:(id)arg3 builtIn:(BOOL)arg4;

@end
