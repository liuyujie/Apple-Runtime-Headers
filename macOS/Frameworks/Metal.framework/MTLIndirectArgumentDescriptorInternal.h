//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Metal/MTLIndirectArgumentDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLIndirectArgumentDescriptorInternal : MTLIndirectArgumentDescriptor
{
    struct MTLArgumentDescriptorPrivate _private;
}

+ (id)indirectArgumentDescriptor;
- (void)setConstantBlockAlignment:(unsigned long long)arg1;
- (unsigned long long)constantBlockAlignment;
- (void)setTextureType:(unsigned long long)arg1;
- (unsigned long long)textureType;
- (void)setAccess:(unsigned long long)arg1;
- (unsigned long long)access;
- (void)setArrayLength:(unsigned long long)arg1;
- (unsigned long long)arrayLength;
- (void)setIndex:(unsigned long long)arg1;
- (unsigned long long)index;
- (void)setDataType:(unsigned long long)arg1;
- (unsigned long long)dataType;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
