//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Espresso/EspressoDataFrameAttachment.h>

@interface EspressoDataFrameTensorAttachment : EspressoDataFrameAttachment
{
    CDStruct_f9cfda8c buffer;
}

+ (CDStruct_f9cfda8c)copyFromCVPixelBuffer:(struct __CVBuffer *)arg1;
- (CDStruct_f9cfda8c)copyAsEspressoBuffer;
- (void)loadFromDict:(id)arg1 frameStorage:(id)arg2;

@end
