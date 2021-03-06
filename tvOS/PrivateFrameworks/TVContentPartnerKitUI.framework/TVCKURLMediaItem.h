//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVPBaseMediaItem.h"

@class NSSet, NSURL;

@interface TVCKURLMediaItem : TVPBaseMediaItem
{
    NSURL *_url;
    NSSet *_traits;
}

@property(copy, nonatomic) NSSet *traits; // @synthesize traits=_traits;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (_Bool)hasTrait:(id)arg1;
- (_Bool)isEqualToMediaItem:(id)arg1;
- (id)mediaItemURL;
- (id)initWithURL:(id)arg1 traits:(id)arg2;
- (id)init;

@end

