//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _CUIMultisizeImageSetSizeAndIndex : NSObject
{
    struct CGSize _size;
    unsigned int _index;
    int _idiom;
    unsigned int _subtype;
}

@property(nonatomic) unsigned int subtype; // @synthesize subtype=_subtype;
@property(nonatomic) int idiom; // @synthesize idiom=_idiom;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (id)description;
- (id)initWithSize:(struct CGSize)arg1 index:(unsigned int)arg2 idiom:(int)arg3 subtype:(unsigned int)arg4;

@end
