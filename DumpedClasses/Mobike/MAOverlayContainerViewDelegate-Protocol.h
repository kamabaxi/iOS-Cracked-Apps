//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MACircle, MACircleRenderer, MAOverlayRenderer, NSArray;

@protocol MAOverlayContainerViewDelegate <NSObject>
- (double)getMapZoomLevel;
- (double)metersPerPixelAtMapZoomLevel:(double)arg1;
- (double)rendererContentScale;
- (float *)getProjectionMatrix;
- (float *)getViewMatrix;
- (struct MAMapPoint)getCurrentOffsetPoint;
- (NSArray *)getCurrentTiles;
- (struct CGPoint)privateGetCurrentRotateDegreeAndCameraDegree;
- (struct CGPoint)privateGetPhysicalResolutionForPoint:(struct CGPoint)arg1;
- (double)privateGetMapPointLenForWinLen:(double)arg1;
- (struct CGPoint)privateGetGlPointForMapPoint:(struct MAMapPoint)arg1;
- (double)privateGetMapLenForPixelLen:(int)arg1;
- (MACircleRenderer *)userLocationCircleRendererWithCircle:(MACircle *)arg1;
- (_Bool)customizeUserLocationAccuracyCircleRepresentation;
- (_Bool)isUserLocationCircle:(id <MAOverlay>)arg1;
- (MAOverlayRenderer *)createDrawableForOverlay:(id <MAOverlay>)arg1;
- (void)overlayContainerAddedDrawables:(NSArray *)arg1;
- (struct MAMapRect)visibleMapRect;
@end
