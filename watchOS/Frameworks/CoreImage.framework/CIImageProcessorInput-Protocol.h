//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol CIImageProcessorInput
@property(readonly, nonatomic) id <MTLTexture> metalTexture;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer;
@property(readonly, nonatomic) const void *baseAddress;
@property(readonly, nonatomic) int format;
@property(readonly, nonatomic) unsigned long bytesPerRow;
@property(readonly, nonatomic) struct CGRect region;
@end

