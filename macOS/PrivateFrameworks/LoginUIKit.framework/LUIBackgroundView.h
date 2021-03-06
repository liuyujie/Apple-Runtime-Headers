//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImageView.h"

@interface LUIBackgroundView : NSImageView
{
    int _style;
    BOOL _fetching;
    unsigned int _displayID;
    struct CGImage *_backupImage;
}

- (id)accessibilityChildren;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setStyle:(int)arg1;
- (void)setDisplayID:(unsigned int)arg1;
- (void)mouseUp:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;

@end

