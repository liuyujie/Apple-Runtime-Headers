//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

__attribute__((visibility("hidden")))
@interface PUAlbumListTableViewCell : UITableViewCell
{
    id <PUAlbumListTableViewCellDelegate> _stateChangeDelegate;
}

@property(nonatomic) __weak id <PUAlbumListTableViewCellDelegate> stateChangeDelegate; // @synthesize stateChangeDelegate=_stateChangeDelegate;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)willTransitionToState:(unsigned long long)arg1;

@end
