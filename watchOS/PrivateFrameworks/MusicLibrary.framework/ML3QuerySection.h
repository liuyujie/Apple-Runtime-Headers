//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ML3QuerySection : NSObject
{
    unsigned int _sectionIndex;
    struct _NSRange _range;
}

@property(nonatomic) unsigned int sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)initWithRange:(struct _NSRange)arg1 sectionIndex:(unsigned int)arg2;

@end

