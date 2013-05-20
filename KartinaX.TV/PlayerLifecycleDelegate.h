//
// Created by mk on 29.04.13.
// Copyright (c) 2013 Maxim Kalina. All rights reserved.
//
// To change the template use AppCode | Preferences | File Templates.
//


#import <Foundation/Foundation.h>

@protocol PlayerLifecycleDelegate <NSObject>

- (void)epgRequested;

- (void)toggleFullScreenRequested;

- (void)playPauseToggleRequested;

- (void)playbackStartPositionRequested:(NSNumber *)position;

- (void)playbackItemTimeDidEnd;

@end