//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface MDLVertexBufferLayout : NSObject <NSCopying>
{
    unsigned int _stride;
}

@property(nonatomic) unsigned int stride; // @synthesize stride=_stride;
- (id)description;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStride:(unsigned int)arg1;

@end

