# Comments and things go here!

import tornado.websocket


class MainScreenHandler(torando.web.RequestHandler):
    @tornado.web.asynchronous
    def get(self):
        self.render("../html/main_screen.html")


# Will I need a websocket interface here?
